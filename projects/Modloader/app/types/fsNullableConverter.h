#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsNullableConverter__Class.h>
#include <Modloader/app/structs/fsNullableConverter.h>

namespace app::classes::types {
    namespace fsNullableConverter {
        inline app::fsNullableConverter__Class** type_info = (app::fsNullableConverter__Class**)(modloader::win::memory::resolve_rva(0x047455C0));
        inline app::fsNullableConverter__Class* get_class() {
            return il2cpp::get_class<app::fsNullableConverter__Class>(type_info, "FullSerializer.Internal", "fsNullableConverter");
        }
        inline app::fsNullableConverter* create() {
            return il2cpp::create_object<app::fsNullableConverter>(get_class());
        }
    } // namespace fsNullableConverter
} // namespace app::classes::types
