#pragma once
#include <Modloader/app/structs/ParameterInfo_1.h>
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/ParameterInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParameterInfo_1 {
        inline app::ParameterInfo_1__Class** type_info() {
            static app::ParameterInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ParameterInfo_1__Class**)(modloader::win::memory::resolve_rva(0x047464A0));
            }
            return cache;
        }
        inline app::ParameterInfo_1__Class* get_class() {
            return il2cpp::get_class<app::ParameterInfo_1__Class>(type_info(), "System.Reflection", "ParameterInfo");
        }
        inline app::ParameterInfo_1* create() {
            return il2cpp::create_object<app::ParameterInfo_1>(get_class());
        }
        inline app::ParameterInfo_1__Array* create_array(int size) {
            return il2cpp::array_new<app::ParameterInfo_1__Array>(get_class(), size);
        }
        inline app::ParameterInfo_1__Array* create_array(const std::vector<app::ParameterInfo_1*>& items) {
            return il2cpp::array_new<app::ParameterInfo_1__Array>(get_class(), items);
        }
    } // namespace ParameterInfo_1
} // namespace app::classes::types
