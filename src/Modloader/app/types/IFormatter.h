#pragma once
#include <Modloader/app/structs/IFormatter.h>
#include <Modloader/app/structs/IFormatter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFormatter {
        inline app::IFormatter__Class** type_info() {
            static app::IFormatter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IFormatter__Class**)(modloader::win::memory::resolve_rva(0x0478C7B0));
            }
            return cache;
        }
        inline app::IFormatter__Class* get_class() {
            return il2cpp::get_class<app::IFormatter__Class>(type_info(), "System.Runtime.Serialization", "IFormatter");
        }
    } // namespace IFormatter
} // namespace app::classes::types
