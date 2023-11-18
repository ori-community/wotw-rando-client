#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrossSceneReferenceId.h>
#include <Modloader/app/structs/CrossSceneReferenceImportData.h>

namespace app::classes::Moon::CrossSceneReferenceImportData {
    IL2CPP_REGISTER_METHOD(0x031BA840, app::CrossSceneReferenceId, get_CrossSceneReferenceId, (app::CrossSceneReferenceImportData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CrossSceneReferenceImportData * this_ptr))
} // namespace app::classes::Moon::CrossSceneReferenceImportData
