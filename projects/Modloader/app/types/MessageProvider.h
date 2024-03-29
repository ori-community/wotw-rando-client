#pragma once
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MessageProvider__Array.h>
#include <Modloader/app/structs/MessageProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageProvider {
        inline app::MessageProvider__Class** type_info() {
            static app::MessageProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MessageProvider__Class**)(modloader::win::memory::resolve_rva(0x04777068));
            }
            return cache;
        }
        inline app::MessageProvider__Class* get_class() {
            return il2cpp::get_class<app::MessageProvider__Class>(type_info(), "", "MessageProvider");
        }
        inline app::MessageProvider* create() {
            return il2cpp::create_object<app::MessageProvider>(get_class());
        }
        inline app::MessageProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::MessageProvider__Array>(get_class(), size);
        }
        inline app::MessageProvider__Array* create_array(const std::vector<app::MessageProvider*>& items) {
            return il2cpp::array_new<app::MessageProvider__Array>(get_class(), items);
        }
    } // namespace MessageProvider
} // namespace app::classes::types
