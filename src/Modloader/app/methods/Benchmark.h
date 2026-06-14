#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Benchmark.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Benchmark {
    IL2CPP_REGISTER_METHOD(0x00F9DF70, void, ctor, app::Benchmark* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x00F9E100, void, Dispose, app::Benchmark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::Benchmark
