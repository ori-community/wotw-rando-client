#pragma once
#include <Modloader/app/structs/fsTypeExtensions_c_DisplayClass2_0.h>
#include <Modloader/app/structs/fsTypeExtensions_c_DisplayClass2_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsTypeExtensions_c_DisplayClass2_0 {
        inline app::fsTypeExtensions_c_DisplayClass2_0__Class** type_info() {
            static app::fsTypeExtensions_c_DisplayClass2_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsTypeExtensions_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x04786510));
            }
            return cache;
        }
        inline app::fsTypeExtensions_c_DisplayClass2_0__Class* get_class() {
            return il2cpp::get_nested_class<app::fsTypeExtensions_c_DisplayClass2_0__Class>(type_info(), "FullSerializer", "fsTypeExtensions", "<>c__DisplayClass2_0");
        }
        inline app::fsTypeExtensions_c_DisplayClass2_0* create() {
            return il2cpp::create_object<app::fsTypeExtensions_c_DisplayClass2_0>(get_class());
        }
    } // namespace fsTypeExtensions_c_DisplayClass2_0
} // namespace app::classes::types
