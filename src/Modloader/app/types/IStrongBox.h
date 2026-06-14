#pragma once
#include <Modloader/app/structs/IStrongBox.h>
#include <Modloader/app/structs/IStrongBox__Array.h>
#include <Modloader/app/structs/IStrongBox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IStrongBox {
        inline app::IStrongBox__Class** type_info() {
            static app::IStrongBox__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IStrongBox__Class**)(modloader::win::memory::resolve_rva(0x0475EFA0));
            }
            return cache;
        }
        inline app::IStrongBox__Class* get_class() {
            return il2cpp::get_class<app::IStrongBox__Class>(type_info(), "System.Runtime.CompilerServices", "IStrongBox");
        }
        inline app::IStrongBox__Array* create_array(int size) {
            return il2cpp::array_new<app::IStrongBox__Array>(get_class(), size);
        }
        inline app::IStrongBox__Array* create_array(const std::vector<app::IStrongBox*>& items) {
            return il2cpp::array_new<app::IStrongBox__Array>(get_class(), items);
        }
    } // namespace IStrongBox
} // namespace app::classes::types
