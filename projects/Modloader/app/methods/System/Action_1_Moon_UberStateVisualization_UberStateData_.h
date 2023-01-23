#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_Moon_UberStateVisualization_UberStateData_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UberStateData.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Action_1_Moon_UberStateVisualization_UberStateData_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Moon_UberStateVisualization_UberStateData_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x047125A8, Action_1_Moon_UberStateVisualization_UberStateData___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A02340, void, Invoke, (app::Action_1_Moon_UberStateVisualization_UberStateData_ * this_ptr, app::UberStateData obj))
    IL2CPP_REGISTER_METHODINFO(0x0476E1E8, Action_1_Moon_UberStateVisualization_UberStateData__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A029C0, app::IAsyncResult*, BeginInvoke, (app::Action_1_Moon_UberStateVisualization_UberStateData_ * this_ptr, app::UberStateData obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Moon_UberStateVisualization_UberStateData_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_Moon_UberStateVisualization_UberStateData_
