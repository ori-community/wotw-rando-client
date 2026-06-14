#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InteriorNode.h>
#include <Modloader/app/structs/Stack_1_System_Xml_Schema_InteriorNode_.h>

namespace app::classes::System::Collections::Generic::Stack_1_System_Xml_Schema_InteriorNode_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, app::Stack_1_System_Xml_Schema_InteriorNode_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, app::Stack_1_System_Xml_Schema_InteriorNode_* this_ptr, app::InteriorNode* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::Stack_1_System_Xml_Schema_InteriorNode_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::InteriorNode*, Pop, app::Stack_1_System_Xml_Schema_InteriorNode_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Stack_1_System_Xml_Schema_InteriorNode_
