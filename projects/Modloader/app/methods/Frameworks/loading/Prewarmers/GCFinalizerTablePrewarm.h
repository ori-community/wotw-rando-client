#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::frameworks::loading::Prewarmers::GCFinalizerTablePrewarm {
    IL2CPP_REGISTER_METHOD(0x00F5F0A0, void, ctor, (app::GCFinalizerTablePrewarm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5F1D0, void, Execute, (app::GCFinalizerTablePrewarm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5F440, void, ThreadMain, (app::Object * ctx_obj))
    IL2CPP_REGISTER_METHODINFO(0x04772B30, GCFinalizerTablePrewarm_ThreadMain__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F5F6F0, bool, Begin, (app::GCFinalizerTablePrewarm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5F760, bool, Update, (app::GCFinalizerTablePrewarm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5F8F0, bool, FinishImmediately, (app::GCFinalizerTablePrewarm * this_ptr))
} // namespace app::classes::frameworks::loading::Prewarmers::GCFinalizerTablePrewarm
