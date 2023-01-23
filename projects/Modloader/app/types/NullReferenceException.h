#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NullReferenceException__Class.h>
#include <Modloader/app/structs/NullReferenceException.h>

namespace app::classes::types {
    namespace NullReferenceException {
        inline app::NullReferenceException__Class** type_info = (app::NullReferenceException__Class**)(modloader::win::memory::resolve_rva(0x04757C20));
        inline app::NullReferenceException__Class* get_class() {
            return il2cpp::get_class<app::NullReferenceException__Class>(type_info, "System", "NullReferenceException");
        }
        inline app::NullReferenceException* create() {
            return il2cpp::create_object<app::NullReferenceException>(get_class());
        }
    } // namespace NullReferenceException
} // namespace app::classes::types
