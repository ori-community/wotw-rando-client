#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderPrewarmOperation__Class.h>
#include <Modloader/app/structs/ShaderPrewarmOperation.h>

namespace app::classes::types {
    namespace ShaderPrewarmOperation {
        inline app::ShaderPrewarmOperation__Class** type_info = (app::ShaderPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x0470D968));
        inline app::ShaderPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::ShaderPrewarmOperation__Class>(type_info, "frameworks.loading.Prewarmers", "ShaderPrewarmOperation");
        }
        inline app::ShaderPrewarmOperation* create() {
            return il2cpp::create_object<app::ShaderPrewarmOperation>(get_class());
        }
    } // namespace ShaderPrewarmOperation
} // namespace app::classes::types
