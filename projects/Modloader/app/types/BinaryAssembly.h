#pragma once
#include <Modloader/app/structs/BinaryAssembly.h>
#include <Modloader/app/structs/BinaryAssembly__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryAssembly {
        inline app::BinaryAssembly__Class** type_info() {
            static app::BinaryAssembly__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryAssembly__Class**)(modloader::win::memory::resolve_rva(0x04724E98));
            }
            return cache;
        }
        inline app::BinaryAssembly__Class* get_class() {
            return il2cpp::get_class<app::BinaryAssembly__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "BinaryAssembly");
        }
        inline app::BinaryAssembly* create() {
            return il2cpp::create_object<app::BinaryAssembly>(get_class());
        }
    } // namespace BinaryAssembly
} // namespace app::classes::types
