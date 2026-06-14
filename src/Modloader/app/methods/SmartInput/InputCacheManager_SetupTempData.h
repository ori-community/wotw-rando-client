#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ICachableInput.h>
#include <Modloader/app/structs/InputCacheManager.h>
#include <Modloader/app/structs/InputCacheManager_SetupTempData.h>
#include <Modloader/app/structs/InputCacheManager_SetupTempData_Node.h>

namespace app::classes::SmartInput::InputCacheManager_SetupTempData {
    IL2CPP_REGISTER_METHOD(0x006CCDB0, void, ctor, app::InputCacheManager_SetupTempData* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x006CCFF0,
        app::InputCacheManager_SetupTempData_Node*,
        GetOrCreateNode,
        app::InputCacheManager_SetupTempData* this_ptr,
        app::ICachableInput* input
    )
    IL2CPP_REGISTER_METHOD(0x006CD1F0, void, AddLinks, app::InputCacheManager_SetupTempData* this_ptr, app::ICachableInput* source)
    IL2CPP_REGISTER_METHOD(
        0x006CD370,
        void,
        DeclareSource,
        app::InputCacheManager_SetupTempData* this_ptr,
        app::ICachableInput* input,
        app::InputCacheManager* man
    )
    IL2CPP_REGISTER_METHOD(0x006CD4E0, void, AllocateNodeIndex, app::InputCacheManager_SetupTempData* this_ptr, app::InputCacheManager_SetupTempData_Node* node)
    IL2CPP_REGISTER_METHOD(0x006CD690, void, PostDeclare, app::InputCacheManager_SetupTempData* this_ptr)
} // namespace app::classes::SmartInput::InputCacheManager_SetupTempData
