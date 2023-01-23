#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsConverter__Class.h>
#include <Modloader/app/structs/fsConverter.h>
#include <Modloader/app/structs/fsConverter__Array.h>

namespace app::classes::types {
    namespace fsConverter {
        inline app::fsConverter__Class** type_info = (app::fsConverter__Class**)(modloader::win::memory::resolve_rva(0x04795230));
        inline app::fsConverter__Class* get_class() {
            return il2cpp::get_class<app::fsConverter__Class>(type_info, "FullSerializer", "fsConverter");
        }
        inline app::fsConverter* create() {
            return il2cpp::create_object<app::fsConverter>(get_class());
        }
        inline app::fsConverter__Array* create_array(int size) {
            return il2cpp::array_new<app::fsConverter__Array>(get_class(), size);
        }
        inline app::fsConverter__Array* create_array(const std::vector<app::fsConverter*>& items) {
            return il2cpp::array_new<app::fsConverter__Array>(get_class(), items);
        }
    } // namespace fsConverter
} // namespace app::classes::types
