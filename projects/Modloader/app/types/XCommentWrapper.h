#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XCommentWrapper {
        inline app::XCommentWrapper__Class** type_info = (app::XCommentWrapper__Class**)(modloader::win::memory::resolve_rva(0x04744C40));
        inline app::XCommentWrapper__Class* get_class() {
            return il2cpp::get_class<app::XCommentWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XCommentWrapper");
        }
        inline app::XCommentWrapper* create() {
            return il2cpp::create_object<app::XCommentWrapper>(get_class());
        }
    } // namespace XCommentWrapper
} // namespace app::classes::types
