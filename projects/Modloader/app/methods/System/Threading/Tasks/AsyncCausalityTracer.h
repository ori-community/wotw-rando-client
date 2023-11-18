#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CausalityTraceLevel__Enum.h>
#include <Modloader/app/structs/AsyncCausalityStatus__Enum.h>
#include <Modloader/app/structs/CausalityRelation__Enum.h>
#include <Modloader/app/structs/CausalitySynchronousWork__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Threading::Tasks::AsyncCausalityTracer {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_LoggingOn, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, TraceOperationCreation, (app::CausalityTraceLevel__Enum trace_level, int32_t task_id, app::String* operation_name, uint64_t related_context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, TraceOperationCompletion, (app::CausalityTraceLevel__Enum trace_level, int32_t task_id, app::AsyncCausalityStatus__Enum status))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, TraceOperationRelation, (app::CausalityTraceLevel__Enum trace_level, int32_t task_id, app::CausalityRelation__Enum relation))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, TraceSynchronousWorkStart, (app::CausalityTraceLevel__Enum trace_level, int32_t task_id, app::CausalitySynchronousWork__Enum work))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, TraceSynchronousWorkCompletion, (app::CausalityTraceLevel__Enum trace_level, app::CausalitySynchronousWork__Enum work))
} // namespace app::classes::System::Threading::Tasks::AsyncCausalityTracer
