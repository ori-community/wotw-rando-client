#pragma once
#include <Modloader/app/structs/fsBaseConverter.h>
#include <Modloader/app/structs/fsBaseConverter__Array.h>
#include <Modloader/app/structs/fsBaseConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsBaseConverter {
        inline app::fsBaseConverter__Class** type_info() {
            static app::fsBaseConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsBaseConverter__Class**)(modloader::win::memory::resolve_rva(0x04765908));
            }
            return cache;
        }
        inline app::fsBaseConverter__Class* get_class() {
            return il2cpp::get_class<app::fsBaseConverter__Class>(type_info(), "FullSerializer", "fsBaseConverter");
        }
        inline app::fsBaseConverter* create() {
            return il2cpp::create_object<app::fsBaseConverter>(get_class());
        }
        inline app::fsBaseConverter__Array* create_array(int size) {
            return il2cpp::array_new<app::fsBaseConverter__Array>(get_class(), size);
        }
        inline app::fsBaseConverter__Array* create_array(const std::vector<app::fsBaseConverter*>& items) {
            return il2cpp::array_new<app::fsBaseConverter__Array>(get_class(), items);
        }
    } // namespace fsBaseConverter
} // namespace app::classes::types
