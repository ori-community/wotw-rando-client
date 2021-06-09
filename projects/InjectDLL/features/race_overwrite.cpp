#include <Il2CppModLoader/interception_macros.h>

namespace
{
    // Noop these, we don't want to upload rando races.
    //STATIC_IL2CPP_INTERCEPT(Moon.Race.Networking, WebService, void, PostReplay, (app::String* race_name, app::ReplayData* replay)) {
    //
    //}

    STATIC_IL2CPP_INTERCEPT(Moon.Race.Networking, WebService, void, UploadData, (app::String* site_id, app::ReplayData* data)) {

    }
}
