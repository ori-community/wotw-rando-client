#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_CrossSceneReferenceExportData_.h>
#include <Modloader/app/structs/CrossSceneReferenceExportRegistry.h>

namespace app::classes::Moon::CrossSceneReferenceExportRegistry {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::List_1_Moon_CrossSceneReferenceExportData_*, get_ExportedObjects, (app::CrossSceneReferenceExportRegistry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_ExportedObjects, (app::CrossSceneReferenceExportRegistry * this_ptr, app::List_1_Moon_CrossSceneReferenceExportData_* value))
    IL2CPP_REGISTER_METHOD(0x031BA860, void, ExposeCrossSceneObjectsIfNeeded, (app::CrossSceneReferenceExportRegistry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BAA20, void, RefreshExposedObjects, (app::CrossSceneReferenceExportRegistry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BAAC0, void, Awake, (app::CrossSceneReferenceExportRegistry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BAAD0, void, OnDestroy, (app::CrossSceneReferenceExportRegistry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BAAD0, void, RemoveAllCrossSceneObjects, (app::CrossSceneReferenceExportRegistry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BAAE0, void, RemoveCrossSceneObjectsifNeeded, (app::CrossSceneReferenceExportRegistry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CrossSceneReferenceExportRegistry * this_ptr))
} // namespace app::classes::Moon::CrossSceneReferenceExportRegistry
