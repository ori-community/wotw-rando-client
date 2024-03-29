#pragma once
#include <Modloader/app/structs/LabelScopeInfo.h>
#include <Modloader/app/structs/LabelScopeInfo__Array.h>
#include <Modloader/app/structs/LabelScopeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LabelScopeInfo {
        inline app::LabelScopeInfo__Class** type_info() {
            static app::LabelScopeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LabelScopeInfo__Class**)(modloader::win::memory::resolve_rva(0x047401F0));
            }
            return cache;
        }
        inline app::LabelScopeInfo__Class* get_class() {
            return il2cpp::get_class<app::LabelScopeInfo__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LabelScopeInfo");
        }
        inline app::LabelScopeInfo* create() {
            return il2cpp::create_object<app::LabelScopeInfo>(get_class());
        }
        inline app::LabelScopeInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::LabelScopeInfo__Array>(get_class(), size);
        }
        inline app::LabelScopeInfo__Array* create_array(const std::vector<app::LabelScopeInfo*>& items) {
            return il2cpp::array_new<app::LabelScopeInfo__Array>(get_class(), items);
        }
    } // namespace LabelScopeInfo
} // namespace app::classes::types
