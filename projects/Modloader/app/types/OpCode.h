#pragma once
#include <Modloader/app/structs/OpCode.h>
#include <Modloader/app/structs/OpCode__Boxed.h>
#include <Modloader/app/structs/OpCode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OpCode {
        inline app::OpCode__Class** type_info() {
            static app::OpCode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OpCode__Class**)(modloader::win::memory::resolve_rva(0x047764D8));
            }
            return cache;
        }
        inline app::OpCode__Class* get_class() {
            return il2cpp::get_class<app::OpCode__Class>(type_info(), "System.Reflection.Emit", "OpCode");
        }
        inline app::OpCode* create() {
            return il2cpp::create_object<app::OpCode>(get_class());
        }
        inline app::OpCode__Boxed* box(app::OpCode value) {
            return il2cpp::box_value<app::OpCode__Boxed>(get_class(), value);
        }
    } // namespace OpCode
} // namespace app::classes::types
