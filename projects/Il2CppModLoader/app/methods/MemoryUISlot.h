#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MemoryUISlot {
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::ReplaySetting*, get_ReplaySetting, (app::MemoryUISlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D96C0, void, OnEnable, (app::MemoryUISlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, SetSetting, (app::MemoryUISlot * this_ptr, app::ReplaySetting* replay))
    IL2CPP_REGISTER_METHOD(0x009D96D0, void, RefreshState, (app::MemoryUISlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007109E0, void, SetSelected, (app::MemoryUISlot * this_ptr, bool selected))
    IL2CPP_REGISTER_METHOD(0x009D9A80, void, SetItemContext, (app::MemoryUISlot * this_ptr, app::Object* context, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnItemContextDirty, (app::MemoryUISlot * this_ptr, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x009D9B50, void, OnPressed, (app::MemoryUISlot * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047079B0, MemoryUISlot_OnPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009D9E20, void, OnHighlighted, (app::MemoryUISlot * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04770D40, MemoryUISlot_OnHighlighted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009D9EA0, void, OnUnhighlighted, (app::MemoryUISlot * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047555A8, MemoryUISlot_OnUnhighlighted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MemoryUISlot * this_ptr))
} // namespace app::classes::MemoryUISlot
