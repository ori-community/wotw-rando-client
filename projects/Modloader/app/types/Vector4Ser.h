#pragma once
#include <Modloader/app/structs/Vector4Ser.h>
#include <Modloader/app/structs/Vector4Ser__Array.h>
#include <Modloader/app/structs/Vector4Ser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vector4Ser {
        inline app::Vector4Ser__Class** type_info() {
            static app::Vector4Ser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Vector4Ser__Class**)(modloader::win::memory::resolve_rva(0x047575D8));
            }
            return cache;
        }
        inline app::Vector4Ser__Class* get_class() {
            return il2cpp::get_class<app::Vector4Ser__Class>(type_info(), "", "Vector4Ser");
        }
        inline app::Vector4Ser* create() {
            return il2cpp::create_object<app::Vector4Ser>(get_class());
        }
        inline app::Vector4Ser__Array* create_array(int size) {
            return il2cpp::array_new<app::Vector4Ser__Array>(get_class(), size);
        }
        inline app::Vector4Ser__Array* create_array(const std::vector<app::Vector4Ser*>& items) {
            return il2cpp::array_new<app::Vector4Ser__Array>(get_class(), items);
        }
    } // namespace Vector4Ser
} // namespace app::classes::types
