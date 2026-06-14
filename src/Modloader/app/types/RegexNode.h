#pragma once
#include <Modloader/app/structs/RegexNode.h>
#include <Modloader/app/structs/RegexNode__Array.h>
#include <Modloader/app/structs/RegexNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexNode {
        inline app::RegexNode__Class** type_info() {
            static app::RegexNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegexNode__Class**)(modloader::win::memory::resolve_rva(0x0473CC18));
            }
            return cache;
        }
        inline app::RegexNode__Class* get_class() {
            return il2cpp::get_class<app::RegexNode__Class>(type_info(), "System.Text.RegularExpressions", "RegexNode");
        }
        inline app::RegexNode* create() {
            return il2cpp::create_object<app::RegexNode>(get_class());
        }
        inline app::RegexNode__Array* create_array(int size) {
            return il2cpp::array_new<app::RegexNode__Array>(get_class(), size);
        }
        inline app::RegexNode__Array* create_array(const std::vector<app::RegexNode*>& items) {
            return il2cpp::array_new<app::RegexNode__Array>(get_class(), items);
        }
    } // namespace RegexNode
} // namespace app::classes::types
