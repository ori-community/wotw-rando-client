#pragma once
#include <Modloader/app/structs/fsConfig.h>
#include <Modloader/app/structs/fsConfig__Array.h>
#include <Modloader/app/structs/fsConfig__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsConfig {
        inline app::fsConfig__Class** type_info() {
            static app::fsConfig__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsConfig__Class**)(modloader::win::memory::resolve_rva(0x0471D130));
            }
            return cache;
        }
        inline app::fsConfig__Class* get_class() {
            return il2cpp::get_class<app::fsConfig__Class>(type_info(), "FullSerializer", "fsConfig");
        }
        inline app::fsConfig* create() {
            return il2cpp::create_object<app::fsConfig>(get_class());
        }
        inline app::fsConfig__Array* create_array(int size) {
            return il2cpp::array_new<app::fsConfig__Array>(get_class(), size);
        }
        inline app::fsConfig__Array* create_array(const std::vector<app::fsConfig*>& items) {
            return il2cpp::array_new<app::fsConfig__Array>(get_class(), items);
        }
    } // namespace fsConfig
} // namespace app::classes::types
