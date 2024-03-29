#pragma once
#include <Modloader/app/structs/BinaryCompatibility_1.h>
#include <Modloader/app/structs/BinaryCompatibility_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryCompatibility_1 {
        inline app::BinaryCompatibility_1__Class** type_info() {
            static app::BinaryCompatibility_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryCompatibility_1__Class**)(modloader::win::memory::resolve_rva(0x047284D0));
            }
            return cache;
        }
        inline app::BinaryCompatibility_1__Class* get_class() {
            return il2cpp::get_class<app::BinaryCompatibility_1__Class>(type_info(), "System.Xml", "BinaryCompatibility");
        }
        inline app::BinaryCompatibility_1* create() {
            return il2cpp::create_object<app::BinaryCompatibility_1>(get_class());
        }
    } // namespace BinaryCompatibility_1
} // namespace app::classes::types
