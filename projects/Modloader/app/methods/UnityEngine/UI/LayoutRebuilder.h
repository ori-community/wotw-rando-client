#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LayoutRebuilder.h>
#include <Modloader/app/structs/CanvasUpdate__Enum.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/List_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UnityAction_1_UnityEngine_Component_.h>

namespace app::classes::UnityEngine::UI::LayoutRebuilder {
    IL2CPP_REGISTER_METHOD(0x0265B9B0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LayoutRebuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0265BDB0, void, Initialize, (app::LayoutRebuilder * this_ptr, app::RectTransform* controller))
    IL2CPP_REGISTER_METHOD(0x0098AB30, void, Clear, (app::LayoutRebuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0265BDF0, void, ReapplyDrivenProperties, (app::RectTransform * driven))
    IL2CPP_REGISTER_METHOD(0x01F2AB40, app::Transform*, get_transform, (app::LayoutRebuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0265BE90, bool, IsDestroyed, (app::LayoutRebuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0265BF30, void, StripDisabledBehavioursFromList, (app::List_1_UnityEngine_Component_ * components))
    IL2CPP_REGISTER_METHOD(0x0265C140, void, ForceRebuildLayoutImmediate, (app::RectTransform * layout_root))
    IL2CPP_REGISTER_METHOD(0x0265C280, void, Rebuild, (app::LayoutRebuilder * this_ptr, app::CanvasUpdate__Enum executing))
    IL2CPP_REGISTER_METHOD(0x0265C8D0, void, PerformLayoutControl, (app::LayoutRebuilder * this_ptr, app::RectTransform* rect, app::UnityAction_1_UnityEngine_Component_* action))
    IL2CPP_REGISTER_METHOD(0x0265CC60, void, PerformLayoutCalculation, (app::LayoutRebuilder * this_ptr, app::RectTransform* rect, app::UnityAction_1_UnityEngine_Component_* action))
    IL2CPP_REGISTER_METHOD(0x0265CFB0, void, MarkLayoutForRebuild, (app::RectTransform * rect))
    IL2CPP_REGISTER_METHOD(0x0265D3D0, bool, ValidController, (app::RectTransform * layout_root, app::List_1_UnityEngine_Component_* comps))
    IL2CPP_REGISTER_METHOD(0x0265D5E0, void, MarkLayoutRootForRebuild, (app::RectTransform * controller))
    IL2CPP_REGISTER_METHOD(0x0265D830, void, LayoutComplete, (app::LayoutRebuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GraphicUpdateComplete, (app::LayoutRebuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024AD170, int32_t, GetHashCode, (app::LayoutRebuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0265D8F0, bool, Equals, (app::LayoutRebuilder * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0265D950, app::String*, ToString, (app::LayoutRebuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0265D9E0, void, _s_Rebuilders_m__0, (app::LayoutRebuilder * x))
    IL2CPP_REGISTER_METHOD(0x0265DA00, bool, _StripDisabledBehavioursFromList_m__1, (app::Component_1 * e))
    IL2CPP_REGISTER_METHOD(0x0265DB90, void, _Rebuild_m__2, (app::Component_1 * e))
    IL2CPP_REGISTER_METHOD(0x0265DC40, void, _Rebuild_m__3, (app::Component_1 * e))
    IL2CPP_REGISTER_METHOD(0x0265DCF0, void, _Rebuild_m__4, (app::Component_1 * e))
    IL2CPP_REGISTER_METHOD(0x0265DDA0, void, _Rebuild_m__5, (app::Component_1 * e))
} // namespace app::classes::UnityEngine::UI::LayoutRebuilder
