#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Globalization::Unicode::CodePointIndexer {
    IL2CPP_REGISTER_METHOD(0x023B9D70, void, ctor, (app::CodePointIndexer * this_ptr, app::Int32__Array* starts, app::Int32__Array* ends, int32_t default_index, int32_t default_c_p))
    IL2CPP_REGISTER_METHOD(0x023B9FB0, int32_t, ToIndex, (app::CodePointIndexer * this_ptr, int32_t cp))
} // namespace app::classes::Mono::Globalization::Unicode::CodePointIndexer
