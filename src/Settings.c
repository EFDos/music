/* Settings.c generated by valac 0.11.6, the Vala compiler
 * generated from Settings.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gconf/gconf-client.h>
#include <stdlib.h>
#include <string.h>
#include <gconf/gconf.h>
#include <stdio.h>


#define BEAT_BOX_TYPE_SETTINGS (beat_box_settings_get_type ())
#define BEAT_BOX_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BEAT_BOX_TYPE_SETTINGS, BeatBoxSettings))
#define BEAT_BOX_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BEAT_BOX_TYPE_SETTINGS, BeatBoxSettingsClass))
#define BEAT_BOX_IS_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BEAT_BOX_TYPE_SETTINGS))
#define BEAT_BOX_IS_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BEAT_BOX_TYPE_SETTINGS))
#define BEAT_BOX_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BEAT_BOX_TYPE_SETTINGS, BeatBoxSettingsClass))

typedef struct _BeatBoxSettings BeatBoxSettings;
typedef struct _BeatBoxSettingsClass BeatBoxSettingsClass;
typedef struct _BeatBoxSettingsPrivate BeatBoxSettingsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _gconf_value_free0(var) ((var == NULL) ? NULL : (var = (gconf_value_free (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

#define BEAT_BOX_TYPE_SONG (beat_box_song_get_type ())
#define BEAT_BOX_SONG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BEAT_BOX_TYPE_SONG, BeatBoxSong))
#define BEAT_BOX_SONG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BEAT_BOX_TYPE_SONG, BeatBoxSongClass))
#define BEAT_BOX_IS_SONG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BEAT_BOX_TYPE_SONG))
#define BEAT_BOX_IS_SONG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BEAT_BOX_TYPE_SONG))
#define BEAT_BOX_SONG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BEAT_BOX_TYPE_SONG, BeatBoxSongClass))

typedef struct _BeatBoxSong BeatBoxSong;
typedef struct _BeatBoxSongClass BeatBoxSongClass;

struct _BeatBoxSettings {
	GObject parent_instance;
	BeatBoxSettingsPrivate * priv;
};

struct _BeatBoxSettingsClass {
	GObjectClass parent_class;
};

struct _BeatBoxSettingsPrivate {
	GConfClient* client;
};


static gpointer beat_box_settings_parent_class = NULL;

GType beat_box_settings_get_type (void) G_GNUC_CONST;
#define BEAT_BOX_SETTINGS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), BEAT_BOX_TYPE_SETTINGS, BeatBoxSettingsPrivate))
enum  {
	BEAT_BOX_SETTINGS_DUMMY_PROPERTY
};
#define BEAT_BOX_SETTINGS_LASTFM_USERNAME "/apps/beatbox/preferences/lastfm/username"
#define BEAT_BOX_SETTINGS_LASTFM_PASSWORD "/apps/beatbox/preferences/lastfm/pass"
#define BEAT_BOX_SETTINGS_LASTFM_AUTO_LOGIN "/apps/beatbox/preferences/lastfm/auto_login"
#define BEAT_BOX_SETTINGS_LASTFM_SESSION_KEY "/apps/beatbox/preferences/lastfm/lastfm_session_key"
#define BEAT_BOX_SETTINGS_MUSIC_FOLDER "/apps/beatbox/preferences/music/music_folder"
#define BEAT_BOX_SETTINGS_UPDATE_FOLDER_HIERARCHY "/apps/beatbox/preferences/music/update_folder_hierarchy"
#define BEAT_BOX_SETTINGS_COPY_IMPORTED_MUSIC "/apps/beatbox/preferences/music/copy_imported_music"
#define BEAT_BOX_SETTINGS_LAST_SONG_PLAYING "/apps/beatbox/preferences/music/last_song_playing"
#define BEAT_BOX_SETTINGS_LAST_SONG_POSITION "/apps/beatbox/preferences/music/last_song_position"
#define BEAT_BOX_SETTINGS_WINDOW_MAXIMIZED "/apps/beatbox/preferences/ui/window_maximized"
#define BEAT_BOX_SETTINGS_WINDOW_WIDTH "/apps/beatbox/preferences/ui/window_width"
#define BEAT_BOX_SETTINGS_WINDOW_HEIGHT "/apps/beatbox/preferences/ui/window_height"
#define BEAT_BOX_SETTINGS_SIDEBAR_WIDTH "/apps/beatbox/preferences/ui/sidebar_width"
#define BEAT_BOX_SETTINGS_MORE_WIDTH "/apps/beatbox/preferences/ui/more_width"
BeatBoxSettings* beat_box_settings_new (void);
BeatBoxSettings* beat_box_settings_construct (GType object_type);
static gboolean beat_box_settings_getBool (BeatBoxSettings* self, const gchar* path, gboolean def);
static gchar* beat_box_settings_getString (BeatBoxSettings* self, const gchar* path, const gchar* def);
static gint beat_box_settings_getInt (BeatBoxSettings* self, const gchar* path, gint def);
static void beat_box_settings_setBool (BeatBoxSettings* self, const gchar* path, gboolean val);
static void beat_box_settings_setString (BeatBoxSettings* self, const gchar* path, const gchar* val);
static void beat_box_settings_setInt (BeatBoxSettings* self, const gchar* path, gint val);
gchar* beat_box_settings_getMusicFolder (BeatBoxSettings* self);
gboolean beat_box_settings_getWindowMaximized (BeatBoxSettings* self);
gint beat_box_settings_getWindowWidth (BeatBoxSettings* self);
gint beat_box_settings_getWindowHeight (BeatBoxSettings* self);
gint beat_box_settings_getSidebarWidth (BeatBoxSettings* self);
gint beat_box_settings_getMoreWidth (BeatBoxSettings* self);
gboolean beat_box_settings_getUpdateFolderHierarchy (BeatBoxSettings* self);
gboolean beat_box_settings_getCopyImportedMusic (BeatBoxSettings* self);
GType beat_box_song_get_type (void) G_GNUC_CONST;
BeatBoxSong* beat_box_settings_getLastSongPlaying (BeatBoxSettings* self);
BeatBoxSong* beat_box_song_new (const gchar* file);
BeatBoxSong* beat_box_song_construct (GType object_type, const gchar* file);
void beat_box_song_set_title (BeatBoxSong* self, const gchar* value);
void beat_box_song_set_artist (BeatBoxSong* self, const gchar* value);
gint beat_box_settings_getLastSongPosition (BeatBoxSettings* self);
gboolean beat_box_settings_getLastFMAutoLogin (BeatBoxSettings* self);
gchar* beat_box_settings_getLastFMSessionKey (BeatBoxSettings* self);
void beat_box_settings_setMusicFolder (BeatBoxSettings* self, const gchar* path);
void beat_box_settings_setWindowMaximized (BeatBoxSettings* self, gboolean val);
void beat_box_settings_setWindowWidth (BeatBoxSettings* self, gint val);
void beat_box_settings_setWindowHeight (BeatBoxSettings* self, gint val);
void beat_box_settings_setSidebarWidth (BeatBoxSettings* self, gint val);
void beat_box_settings_setMoreWidth (BeatBoxSettings* self, gint val);
void beat_box_settings_setUpdateFolderHierarchy (BeatBoxSettings* self, gboolean val);
void beat_box_settings_setCopyImportedMusic (BeatBoxSettings* self, gboolean val);
void beat_box_settings_setLastSongPlaying (BeatBoxSettings* self, BeatBoxSong* s);
const gchar* beat_box_song_get_title (BeatBoxSong* self);
const gchar* beat_box_song_get_artist (BeatBoxSong* self);
void beat_box_settings_setLastSongPosition (BeatBoxSettings* self, gint val);
void beat_box_settings_setLastFMAutoLogin (BeatBoxSettings* self, gboolean val);
void beat_box_settings_setLastFMSessionKey (BeatBoxSettings* self, const gchar* val);
static void beat_box_settings_finalize (GObject* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


BeatBoxSettings* beat_box_settings_construct (GType object_type) {
	BeatBoxSettings * self = NULL;
	GConfClient* _tmp0_ = NULL;
	GConfClient* _tmp1_;
	GConfClient* _tmp2_;
	self = (BeatBoxSettings*) g_object_new (object_type, NULL);
	_tmp0_ = gconf_client_get_default ();
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_tmp2_ = _tmp1_;
	_g_object_unref0 (self->priv->client);
	self->priv->client = _tmp2_;
	return self;
}


BeatBoxSettings* beat_box_settings_new (void) {
	return beat_box_settings_construct (BEAT_BOX_TYPE_SETTINGS);
}


static gboolean beat_box_settings_getBool (BeatBoxSettings* self, const gchar* path, gboolean def) {
	gboolean result = FALSE;
	gboolean rv;
	GConfValue* _tmp0_ = NULL;
	GConfValue* _tmp1_;
	GConfValue* _tmp2_;
	gboolean _tmp3_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (path != NULL, FALSE);
	rv = def;
	_tmp0_ = gconf_client_get (self->priv->client, path, &_inner_error_);
	_tmp1_ = _tmp0_;
	if (_inner_error_ != NULL) {
		goto __catch49_g_error;
	}
	_tmp2_ = _tmp1_;
	if ((_tmp3_ = _tmp2_ != NULL, _gconf_value_free0 (_tmp2_), _tmp3_)) {
		gboolean _tmp4_;
		gboolean _tmp5_;
		_tmp4_ = gconf_client_get_bool (self->priv->client, path, &_inner_error_);
		_tmp5_ = _tmp4_;
		if (_inner_error_ != NULL) {
			goto __catch49_g_error;
		}
		rv = _tmp5_;
	} else {
		rv = def;
	}
	goto __finally49;
	__catch49_g_error:
	{
		GError * err;
		err = _inner_error_;
		_inner_error_ = NULL;
		fprintf (stdout, "Could not get bool value %s from gconf: %s\n", path, err->message);
		_g_error_free0 (err);
	}
	__finally49:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return FALSE;
	}
	result = rv;
	return result;
}


static gchar* beat_box_settings_getString (BeatBoxSettings* self, const gchar* path, const gchar* def) {
	gchar* result = NULL;
	gchar* _tmp0_;
	gchar* rv;
	GConfValue* _tmp1_ = NULL;
	GConfValue* _tmp2_;
	GConfValue* _tmp3_;
	gboolean _tmp4_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (path != NULL, NULL);
	g_return_val_if_fail (def != NULL, NULL);
	_tmp0_ = g_strdup (def);
	rv = _tmp0_;
	_tmp1_ = gconf_client_get (self->priv->client, path, &_inner_error_);
	_tmp2_ = _tmp1_;
	if (_inner_error_ != NULL) {
		goto __catch50_g_error;
	}
	_tmp3_ = _tmp2_;
	if ((_tmp4_ = _tmp3_ != NULL, _gconf_value_free0 (_tmp3_), _tmp4_)) {
		gchar* _tmp5_ = NULL;
		gchar* _tmp6_;
		gchar* _tmp7_;
		_tmp5_ = gconf_client_get_string (self->priv->client, path, &_inner_error_);
		_tmp6_ = _tmp5_;
		if (_inner_error_ != NULL) {
			goto __catch50_g_error;
		}
		_tmp7_ = _tmp6_;
		_g_free0 (rv);
		rv = _tmp7_;
	} else {
		gchar* _tmp8_;
		gchar* _tmp9_;
		_tmp8_ = g_strdup (def);
		_tmp9_ = _tmp8_;
		_g_free0 (rv);
		rv = _tmp9_;
	}
	goto __finally50;
	__catch50_g_error:
	{
		GError * err;
		err = _inner_error_;
		_inner_error_ = NULL;
		fprintf (stdout, "Could not get string value %s from gconf: %s\n", path, err->message);
		_g_error_free0 (err);
	}
	__finally50:
	if (_inner_error_ != NULL) {
		_g_free0 (rv);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	result = rv;
	return result;
}


static gint beat_box_settings_getInt (BeatBoxSettings* self, const gchar* path, gint def) {
	gint result = 0;
	gint rv;
	GConfValue* _tmp0_ = NULL;
	GConfValue* _tmp1_;
	GConfValue* _tmp2_;
	gboolean _tmp3_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (path != NULL, 0);
	rv = def;
	_tmp0_ = gconf_client_get (self->priv->client, path, &_inner_error_);
	_tmp1_ = _tmp0_;
	if (_inner_error_ != NULL) {
		goto __catch51_g_error;
	}
	_tmp2_ = _tmp1_;
	if ((_tmp3_ = _tmp2_ != NULL, _gconf_value_free0 (_tmp2_), _tmp3_)) {
		gint _tmp4_;
		gint _tmp5_;
		_tmp4_ = gconf_client_get_int (self->priv->client, path, &_inner_error_);
		_tmp5_ = _tmp4_;
		if (_inner_error_ != NULL) {
			goto __catch51_g_error;
		}
		rv = _tmp5_;
	} else {
		rv = def;
	}
	goto __finally51;
	__catch51_g_error:
	{
		GError * err;
		err = _inner_error_;
		_inner_error_ = NULL;
		fprintf (stdout, "Could not get int value %s from gconf: %s\n", path, err->message);
		_g_error_free0 (err);
	}
	__finally51:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return 0;
	}
	result = rv;
	return result;
}


static void beat_box_settings_setBool (BeatBoxSettings* self, const gchar* path, gboolean val) {
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (path != NULL);
	gconf_client_set_bool (self->priv->client, path, val, &_inner_error_);
	if (_inner_error_ != NULL) {
		goto __catch52_g_error;
	}
	goto __finally52;
	__catch52_g_error:
	{
		GError * err;
		err = _inner_error_;
		_inner_error_ = NULL;
		fprintf (stdout, "Could not set bool value %s from gconf: %s\n", path, err->message);
		_g_error_free0 (err);
	}
	__finally52:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


static void beat_box_settings_setString (BeatBoxSettings* self, const gchar* path, const gchar* val) {
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (path != NULL);
	g_return_if_fail (val != NULL);
	gconf_client_set_string (self->priv->client, path, val, &_inner_error_);
	if (_inner_error_ != NULL) {
		goto __catch53_g_error;
	}
	goto __finally53;
	__catch53_g_error:
	{
		GError * err;
		err = _inner_error_;
		_inner_error_ = NULL;
		fprintf (stdout, "Could not set string value %s from gconf: %s\n", path, err->message);
		_g_error_free0 (err);
	}
	__finally53:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


static void beat_box_settings_setInt (BeatBoxSettings* self, const gchar* path, gint val) {
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (path != NULL);
	gconf_client_set_int (self->priv->client, path, val, &_inner_error_);
	if (_inner_error_ != NULL) {
		goto __catch54_g_error;
	}
	goto __finally54;
	__catch54_g_error:
	{
		GError * err;
		err = _inner_error_;
		_inner_error_ = NULL;
		fprintf (stdout, "Could not set int value %s from gconf: %s\n", path, err->message);
		_g_error_free0 (err);
	}
	__finally54:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


/** Get values **/
gchar* beat_box_settings_getMusicFolder (BeatBoxSettings* self) {
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = beat_box_settings_getString (self, BEAT_BOX_SETTINGS_MUSIC_FOLDER, "");
	result = _tmp0_;
	return result;
}


gboolean beat_box_settings_getWindowMaximized (BeatBoxSettings* self) {
	gboolean result = FALSE;
	gboolean _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = beat_box_settings_getBool (self, BEAT_BOX_SETTINGS_WINDOW_MAXIMIZED, FALSE);
	result = _tmp0_;
	return result;
}


gint beat_box_settings_getWindowWidth (BeatBoxSettings* self) {
	gint result = 0;
	gint _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = beat_box_settings_getInt (self, BEAT_BOX_SETTINGS_WINDOW_WIDTH, 1100);
	result = _tmp0_;
	return result;
}


gint beat_box_settings_getWindowHeight (BeatBoxSettings* self) {
	gint result = 0;
	gint _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = beat_box_settings_getInt (self, BEAT_BOX_SETTINGS_WINDOW_HEIGHT, 600);
	result = _tmp0_;
	return result;
}


gint beat_box_settings_getSidebarWidth (BeatBoxSettings* self) {
	gint result = 0;
	gint _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = beat_box_settings_getInt (self, BEAT_BOX_SETTINGS_SIDEBAR_WIDTH, 200);
	result = _tmp0_;
	return result;
}


gint beat_box_settings_getMoreWidth (BeatBoxSettings* self) {
	gint result = 0;
	gint _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = beat_box_settings_getInt (self, BEAT_BOX_SETTINGS_MORE_WIDTH, 725);
	result = _tmp0_;
	return result;
}


gboolean beat_box_settings_getUpdateFolderHierarchy (BeatBoxSettings* self) {
	gboolean result = FALSE;
	gboolean _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = beat_box_settings_getBool (self, BEAT_BOX_SETTINGS_UPDATE_FOLDER_HIERARCHY, FALSE);
	result = _tmp0_;
	return result;
}


gboolean beat_box_settings_getCopyImportedMusic (BeatBoxSettings* self) {
	gboolean result = FALSE;
	gboolean _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = beat_box_settings_getBool (self, BEAT_BOX_SETTINGS_COPY_IMPORTED_MUSIC, FALSE);
	result = _tmp0_;
	return result;
}


BeatBoxSong* beat_box_settings_getLastSongPlaying (BeatBoxSettings* self) {
	BeatBoxSong* result = NULL;
	gchar* _tmp0_ = NULL;
	gchar* _tmp1_;
	gchar** _tmp2_;
	gchar** _tmp3_ = NULL;
	gchar** _tmp4_;
	gchar** song_parts;
	gint song_parts_length1;
	gint _song_parts_size_;
	BeatBoxSong* _tmp5_ = NULL;
	BeatBoxSong* rv;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = beat_box_settings_getString (self, BEAT_BOX_SETTINGS_LAST_SONG_PLAYING, "");
	_tmp1_ = _tmp0_;
	_tmp3_ = _tmp2_ = g_strsplit (_tmp1_, "<seperator>", 0);
	song_parts = (_tmp4_ = _tmp3_, _g_free0 (_tmp1_), _tmp4_);
	song_parts_length1 = _vala_array_length (_tmp2_);
	_song_parts_size_ = _vala_array_length (_tmp2_);
	_tmp5_ = beat_box_song_new ("");
	rv = _tmp5_;
	if (song_parts_length1 < 2) {
		result = rv;
		song_parts = (_vala_array_free (song_parts, song_parts_length1, (GDestroyNotify) g_free), NULL);
		return result;
	}
	beat_box_song_set_title (rv, song_parts[0]);
	beat_box_song_set_artist (rv, song_parts[1]);
	result = rv;
	song_parts = (_vala_array_free (song_parts, song_parts_length1, (GDestroyNotify) g_free), NULL);
	return result;
}


gint beat_box_settings_getLastSongPosition (BeatBoxSettings* self) {
	gint result = 0;
	gint _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = beat_box_settings_getInt (self, BEAT_BOX_SETTINGS_LAST_SONG_POSITION, 0);
	result = _tmp0_;
	return result;
}


gboolean beat_box_settings_getLastFMAutoLogin (BeatBoxSettings* self) {
	gboolean result = FALSE;
	gboolean _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = beat_box_settings_getBool (self, BEAT_BOX_SETTINGS_LASTFM_AUTO_LOGIN, FALSE);
	result = _tmp0_;
	return result;
}


gchar* beat_box_settings_getLastFMSessionKey (BeatBoxSettings* self) {
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = beat_box_settings_getString (self, BEAT_BOX_SETTINGS_LASTFM_SESSION_KEY, "");
	result = _tmp0_;
	return result;
}


/** Set Values **/
void beat_box_settings_setMusicFolder (BeatBoxSettings* self, const gchar* path) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (path != NULL);
	beat_box_settings_setString (self, BEAT_BOX_SETTINGS_MUSIC_FOLDER, path);
}


void beat_box_settings_setWindowMaximized (BeatBoxSettings* self, gboolean val) {
	g_return_if_fail (self != NULL);
	beat_box_settings_setBool (self, BEAT_BOX_SETTINGS_WINDOW_MAXIMIZED, val);
}


void beat_box_settings_setWindowWidth (BeatBoxSettings* self, gint val) {
	g_return_if_fail (self != NULL);
	beat_box_settings_setInt (self, BEAT_BOX_SETTINGS_WINDOW_WIDTH, val);
}


void beat_box_settings_setWindowHeight (BeatBoxSettings* self, gint val) {
	g_return_if_fail (self != NULL);
	beat_box_settings_setInt (self, BEAT_BOX_SETTINGS_WINDOW_HEIGHT, val);
}


void beat_box_settings_setSidebarWidth (BeatBoxSettings* self, gint val) {
	g_return_if_fail (self != NULL);
	beat_box_settings_setInt (self, BEAT_BOX_SETTINGS_SIDEBAR_WIDTH, val);
}


void beat_box_settings_setMoreWidth (BeatBoxSettings* self, gint val) {
	g_return_if_fail (self != NULL);
	beat_box_settings_setInt (self, BEAT_BOX_SETTINGS_MORE_WIDTH, val);
}


void beat_box_settings_setUpdateFolderHierarchy (BeatBoxSettings* self, gboolean val) {
	g_return_if_fail (self != NULL);
	beat_box_settings_setBool (self, BEAT_BOX_SETTINGS_UPDATE_FOLDER_HIERARCHY, val);
}


void beat_box_settings_setCopyImportedMusic (BeatBoxSettings* self, gboolean val) {
	g_return_if_fail (self != NULL);
	beat_box_settings_setBool (self, BEAT_BOX_SETTINGS_COPY_IMPORTED_MUSIC, val);
}


void beat_box_settings_setLastSongPlaying (BeatBoxSettings* self, BeatBoxSong* s) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (s != NULL);
	_tmp0_ = beat_box_song_get_title (s);
	_tmp1_ = g_strconcat (_tmp0_, "<seperator>", NULL);
	_tmp2_ = beat_box_song_get_artist (s);
	_tmp3_ = g_strconcat (_tmp1_, _tmp2_, NULL);
	beat_box_settings_setString (self, BEAT_BOX_SETTINGS_LAST_SONG_PLAYING, _tmp3_);
	_g_free0 (_tmp3_);
	_g_free0 (_tmp1_);
}


void beat_box_settings_setLastSongPosition (BeatBoxSettings* self, gint val) {
	g_return_if_fail (self != NULL);
	beat_box_settings_setInt (self, BEAT_BOX_SETTINGS_LAST_SONG_POSITION, val);
}


void beat_box_settings_setLastFMAutoLogin (BeatBoxSettings* self, gboolean val) {
	g_return_if_fail (self != NULL);
	beat_box_settings_setBool (self, BEAT_BOX_SETTINGS_LASTFM_AUTO_LOGIN, val);
}


void beat_box_settings_setLastFMSessionKey (BeatBoxSettings* self, const gchar* val) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (val != NULL);
	beat_box_settings_setString (self, BEAT_BOX_SETTINGS_LASTFM_SESSION_KEY, val);
}


static void beat_box_settings_class_init (BeatBoxSettingsClass * klass) {
	beat_box_settings_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (BeatBoxSettingsPrivate));
	G_OBJECT_CLASS (klass)->finalize = beat_box_settings_finalize;
}


static void beat_box_settings_instance_init (BeatBoxSettings * self) {
	self->priv = BEAT_BOX_SETTINGS_GET_PRIVATE (self);
}


static void beat_box_settings_finalize (GObject* obj) {
	BeatBoxSettings * self;
	self = BEAT_BOX_SETTINGS (obj);
	_g_object_unref0 (self->priv->client);
	G_OBJECT_CLASS (beat_box_settings_parent_class)->finalize (obj);
}


GType beat_box_settings_get_type (void) {
	static volatile gsize beat_box_settings_type_id__volatile = 0;
	if (g_once_init_enter (&beat_box_settings_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (BeatBoxSettingsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) beat_box_settings_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BeatBoxSettings), 0, (GInstanceInitFunc) beat_box_settings_instance_init, NULL };
		GType beat_box_settings_type_id;
		beat_box_settings_type_id = g_type_register_static (G_TYPE_OBJECT, "BeatBoxSettings", &g_define_type_info, 0);
		g_once_init_leave (&beat_box_settings_type_id__volatile, beat_box_settings_type_id);
	}
	return beat_box_settings_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}


static gint _vala_array_length (gpointer array) {
	int length;
	length = 0;
	if (array) {
		while (((gpointer*) array)[length]) {
			length++;
		}
	}
	return length;
}



