#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IPrewarmOperation__Class.h>
#include <Modloader/app/structs/IPrewarmOperation__Array.h>
#include <Modloader/app/structs/IPrewarmOperation.h>

namespace app::classes::types {
    namespace IPrewarmOperation {
        inline app::IPrewarmOperation__Class** type_info = (app::IPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x0473BB40));
        inline app::IPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::IPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "IPrewarmOperation");
        }
        inline app::IPrewarmOperation__Array* create_array(int size) {
            return il2cpp::array_new<app::IPrewarmOperation__Array>(get_class(), size);
        }
        inline app::IPrewarmOperation__Array* create_array(const std::vector<app::IPrewarmOperation*>& items) {
            return il2cpp::array_new<app::IPrewarmOperation__Array>(get_class(), items);
        }
    } // namespace IPrewarmOperation
} // namespace app::classes::types
