#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Predicate_1_LegacyTransparencyAnimator_RendererData_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator_RendererData.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Predicate_1_LegacyTransparencyAnimator_RendererData_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_LegacyTransparencyAnimator_RendererData_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02885850, bool, Invoke, (app::Predicate_1_LegacyTransparencyAnimator_RendererData_ * this_ptr, app::LegacyTransparencyAnimator_RendererData obj))
    IL2CPP_REGISTER_METHOD(0x0288FC20, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_LegacyTransparencyAnimator_RendererData_ * this_ptr, app::LegacyTransparencyAnimator_RendererData obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_LegacyTransparencyAnimator_RendererData_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_LegacyTransparencyAnimator_RendererData_
