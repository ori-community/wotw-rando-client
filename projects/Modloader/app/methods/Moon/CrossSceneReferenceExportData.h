#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::CrossSceneReferenceExportData {
    IL2CPP_REGISTER_METHOD(0x031BA840, app::CrossSceneReferenceId, get_CrossSceneReferenceId, (app::CrossSceneReferenceExportData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Object_1*, get_ObjectRef, (app::CrossSceneReferenceExportData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CrossSceneReferenceExportData * this_ptr))
} // namespace app::classes::Moon::CrossSceneReferenceExportData
