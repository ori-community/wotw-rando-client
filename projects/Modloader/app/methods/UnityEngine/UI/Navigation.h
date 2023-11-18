#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Navigation_Mode__Enum.h>
#include <Modloader/app/structs/Navigation.h>
#include <Modloader/app/structs/Navigation__Boxed.h>
#include <Modloader/app/structs/Selectable.h>

namespace app::classes::UnityEngine::UI::Navigation {
    IL2CPP_REGISTER_METHOD(0x001EBC90, app::Navigation_Mode__Enum, get_mode, (app::Navigation__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_mode, (app::Navigation__Boxed * this_ptr, app::Navigation_Mode__Enum value))
    IL2CPP_REGISTER_METHOD(0x001FBB90, app::Selectable*, get_selectOnUp, (app::Navigation__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010D3A0, void, set_selectOnUp, (app::Navigation__Boxed * this_ptr, app::Selectable* value))
    IL2CPP_REGISTER_METHOD(0x001FBBA0, app::Selectable*, get_selectOnDown, (app::Navigation__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010D3B0, void, set_selectOnDown, (app::Navigation__Boxed * this_ptr, app::Selectable* value))
    IL2CPP_REGISTER_METHOD(0x001FBBB0, app::Selectable*, get_selectOnLeft, (app::Navigation__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010D3C0, void, set_selectOnLeft, (app::Navigation__Boxed * this_ptr, app::Selectable* value))
    IL2CPP_REGISTER_METHOD(0x001FBBC0, app::Selectable*, get_selectOnRight, (app::Navigation__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010D3D0, void, set_selectOnRight, (app::Navigation__Boxed * this_ptr, app::Selectable* value))
    IL2CPP_REGISTER_METHOD(0x02662E00, app::Navigation, get_defaultNavigation, ())
    IL2CPP_REGISTER_METHOD(0x001FBBD0, bool, Equals, (app::Navigation__Boxed * this_ptr, app::Navigation other))
} // namespace app::classes::UnityEngine::UI::Navigation
