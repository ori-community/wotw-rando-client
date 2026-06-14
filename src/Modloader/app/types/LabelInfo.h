#pragma once
#include <Modloader/app/structs/LabelInfo.h>
#include <Modloader/app/structs/LabelInfo__Array.h>
#include <Modloader/app/structs/LabelInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LabelInfo {
        inline app::LabelInfo__Class** type_info() {
            static app::LabelInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LabelInfo__Class**)(modloader::win::memory::resolve_rva(0x04739D68));
            }
            return cache;
        }
        inline app::LabelInfo__Class* get_class() {
            return il2cpp::get_class<app::LabelInfo__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LabelInfo");
        }
        inline app::LabelInfo* create() {
            return il2cpp::create_object<app::LabelInfo>(get_class());
        }
        inline app::LabelInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::LabelInfo__Array>(get_class(), size);
        }
        inline app::LabelInfo__Array* create_array(const std::vector<app::LabelInfo*>& items) {
            return il2cpp::array_new<app::LabelInfo__Array>(get_class(), items);
        }
    } // namespace LabelInfo
} // namespace app::classes::types
