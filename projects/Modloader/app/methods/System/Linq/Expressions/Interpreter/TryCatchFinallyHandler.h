#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TryCatchFinallyHandler.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ExceptionFilter.h>
#include <Modloader/app/structs/ExceptionHandler.h>
#include <Modloader/app/structs/ExceptionHandler__Array.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler {
    IL2CPP_REGISTER_METHOD(0x02415020, bool, get_IsFinallyBlockExist, (app::TryCatchFinallyHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D60150, bool, get_IsCatchBlockExist, (app::TryCatchFinallyHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02415030, void, ctor_1, (app::TryCatchFinallyHandler * this_ptr, int32_t try_start, int32_t try_end, int32_t goto_end_target_index, app::ExceptionHandler__Array* handlers))
    IL2CPP_REGISTER_METHOD(0x02415060, void, ctor_2, (app::TryCatchFinallyHandler * this_ptr, int32_t try_start, int32_t try_end, int32_t goto_end_label_index, int32_t finally_start, int32_t finally_end, app::ExceptionHandler__Array* handlers))
    IL2CPP_REGISTER_METHOD(0x02415090, bool, HasHandler, (app::TryCatchFinallyHandler * this_ptr, app::InterpretedFrame* frame, app::Exception* exception, app::ExceptionHandler** handler, app::Object** unwrapped_exception))
    IL2CPP_REGISTER_METHOD(0x02415260, bool, FilterPasses, (app::InterpretedFrame * frame, app::Object** exception, app::ExceptionFilter* filter))
} // namespace app::classes::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler
