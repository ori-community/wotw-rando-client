#pragma once
#include <Modloader/app/structs/RegexCharClass_SingleRange.h>
#include <Modloader/app/structs/RegexCharClass_SingleRange__Array.h>
#include <Modloader/app/structs/RegexCharClass_SingleRange__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexCharClass_SingleRange {
        inline app::RegexCharClass_SingleRange__Class** type_info() {
            static app::RegexCharClass_SingleRange__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegexCharClass_SingleRange__Class**)(modloader::win::memory::resolve_rva(0x0475CEB0));
            }
            return cache;
        }
        inline app::RegexCharClass_SingleRange__Class* get_class() {
            return il2cpp::get_nested_class<app::RegexCharClass_SingleRange__Class>(type_info(), "System.Text.RegularExpressions", "RegexCharClass", "SingleRange");
        }
        inline app::RegexCharClass_SingleRange* create() {
            return il2cpp::create_object<app::RegexCharClass_SingleRange>(get_class());
        }
        inline app::RegexCharClass_SingleRange__Array* create_array(int size) {
            return il2cpp::array_new<app::RegexCharClass_SingleRange__Array>(get_class(), size);
        }
        inline app::RegexCharClass_SingleRange__Array* create_array(const std::vector<app::RegexCharClass_SingleRange*>& items) {
            return il2cpp::array_new<app::RegexCharClass_SingleRange__Array>(get_class(), items);
        }
    } // namespace RegexCharClass_SingleRange
} // namespace app::classes::types
