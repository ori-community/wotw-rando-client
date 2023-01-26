#pragma once
#include <Modloader/app/structs/BinaryAssemblyInfo.h>
#include <Modloader/app/structs/BinaryAssemblyInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryAssemblyInfo {
        inline app::BinaryAssemblyInfo__Class** type_info() {
            static app::BinaryAssemblyInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryAssemblyInfo__Class**)(modloader::win::memory::resolve_rva(0x04759960));
            }
            return cache;
        }
        inline app::BinaryAssemblyInfo__Class* get_class() {
            return il2cpp::get_class<app::BinaryAssemblyInfo__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "BinaryAssemblyInfo");
        }
        inline app::BinaryAssemblyInfo* create() {
            return il2cpp::create_object<app::BinaryAssemblyInfo>(get_class());
        }
    } // namespace BinaryAssemblyInfo
} // namespace app::classes::types
