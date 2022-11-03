#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegexFC__Array {
        inline app::RegexFC__Array__Class** type_info = (app::RegexFC__Array__Class**)(modloader::win::memory::resolve_rva(0x04711EA8));
        inline app::RegexFC__Array__Class* get_class() {
            return il2cpp::get_class<app::RegexFC__Array__Class>(type_info, "System.Text.RegularExpressions", "RegexFC[]");
        }
        inline app::RegexFC__Array* create() {
            return il2cpp::create_object<app::RegexFC__Array>(get_class());
        }
    } // namespace RegexFC__Array
} // namespace app::classes::types
