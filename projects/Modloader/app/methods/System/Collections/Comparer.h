#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Collections::Comparer {
    IL2CPP_REGISTER_METHOD(0x0063D180, void, ctor_1, (app::Comparer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02020380, void, ctor_2, (app::Comparer * this_ptr, app::CultureInfo* culture))
    IL2CPP_REGISTER_METHOD(0x02020450, void, ctor_3, (app::Comparer * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x020205C0, int32_t, Compare, (app::Comparer * this_ptr, app::Object* a, app::Object* b))
    IL2CPP_REGISTER_METHOD(0x02020750, void, GetObjectData, (app::Comparer * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02020820, void, cctor, ())
} // namespace app::classes::System::Collections::Comparer
