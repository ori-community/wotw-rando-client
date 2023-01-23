#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EvaluateException__Class.h>
#include <Modloader/app/structs/EvaluateException.h>

namespace app::classes::types {
    namespace EvaluateException {
        inline app::EvaluateException__Class** type_info = (app::EvaluateException__Class**)(modloader::win::memory::resolve_rva(0x047815B0));
        inline app::EvaluateException__Class* get_class() {
            return il2cpp::get_class<app::EvaluateException__Class>(type_info, "System.Data", "EvaluateException");
        }
        inline app::EvaluateException* create() {
            return il2cpp::create_object<app::EvaluateException>(get_class());
        }
    } // namespace EvaluateException
} // namespace app::classes::types
