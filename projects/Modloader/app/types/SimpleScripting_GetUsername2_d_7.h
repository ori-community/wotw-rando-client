#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SimpleScripting_GetUsername2_d_7__Class.h>
#include <Modloader/app/structs/SimpleScripting_GetUsername2_d_7.h>

namespace app::classes::types {
    namespace SimpleScripting_GetUsername2_d_7 {
        inline app::SimpleScripting_GetUsername2_d_7__Class** type_info = (app::SimpleScripting_GetUsername2_d_7__Class**)(modloader::win::memory::resolve_rva(0x04713840));
        inline app::SimpleScripting_GetUsername2_d_7__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleScripting_GetUsername2_d_7__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "SimpleScripting", "<_GetUsername2>d__7");
        }
        inline app::SimpleScripting_GetUsername2_d_7* create() {
            return il2cpp::create_object<app::SimpleScripting_GetUsername2_d_7>(get_class());
        }
    } // namespace SimpleScripting_GetUsername2_d_7
} // namespace app::classes::types
