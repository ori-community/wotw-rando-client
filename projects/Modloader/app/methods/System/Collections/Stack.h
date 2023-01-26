#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Stack.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Collections::Stack {
    IL2CPP_REGISTER_METHOD(0x02031C10, void, ctor_1, (app::Stack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02031CB0, void, ctor_2, (app::Stack * this_ptr, int32_t initial_capacity))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::Stack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02031DA0, app::Object*, get_SyncRoot, (app::Stack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02031F00, void, Clear, (app::Stack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02031F30, app::Object*, Clone, (app::Stack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020320C0, void, CopyTo, (app::Stack * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x020323B0, app::IEnumerator*, GetEnumerator, (app::Stack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02032510, app::Object*, Peek, (app::Stack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02032600, app::Object*, Pop, (app::Stack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02032730, void, Push, (app::Stack * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02032890, app::Object__Array*, ToArray, (app::Stack * this_ptr))
} // namespace app::classes::System::Collections::Stack
