#pragma once
#include <Modloader/app/structs/IContextAttribute.h>
#include <Modloader/app/structs/IContextAttribute__Array.h>
#include <Modloader/app/structs/IContextAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IContextAttribute {
        inline app::IContextAttribute__Class** type_info() {
            static app::IContextAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IContextAttribute__Class**)(modloader::win::memory::resolve_rva(0x0472F8C0));
            }
            return cache;
        }
        inline app::IContextAttribute__Class* get_class() {
            return il2cpp::get_class<app::IContextAttribute__Class>(type_info(), "System.Runtime.Remoting.Contexts", "IContextAttribute");
        }
        inline app::IContextAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::IContextAttribute__Array>(get_class(), size);
        }
        inline app::IContextAttribute__Array* create_array(const std::vector<app::IContextAttribute*>& items) {
            return il2cpp::array_new<app::IContextAttribute__Array>(get_class(), items);
        }
    } // namespace IContextAttribute
} // namespace app::classes::types
