#pragma once
#include <Modloader/app/structs/XCommentWrapper.h>
#include <Modloader/app/structs/XCommentWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XCommentWrapper {
        inline app::XCommentWrapper__Class** type_info() {
            static app::XCommentWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XCommentWrapper__Class**)(modloader::win::memory::resolve_rva(0x04744C40));
            }
            return cache;
        }
        inline app::XCommentWrapper__Class* get_class() {
            return il2cpp::get_class<app::XCommentWrapper__Class>(type_info(), "Newtonsoft.Json.Converters", "XCommentWrapper");
        }
        inline app::XCommentWrapper* create() {
            return il2cpp::create_object<app::XCommentWrapper>(get_class());
        }
    } // namespace XCommentWrapper
} // namespace app::classes::types
