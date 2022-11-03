#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Converters::XProcessingInstructionWrapper {
    IL2CPP_REGISTER_METHOD(0x01A59D60, app::XProcessingInstruction*, get_ProcessingInstruction, (app::XProcessingInstructionWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::XProcessingInstructionWrapper * this_ptr, app::XProcessingInstruction* processing_instruction))
    IL2CPP_REGISTER_METHOD(0x01A59E30, app::String*, get_LocalName, (app::XProcessingInstructionWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A59E50, app::String*, get_Value, (app::XProcessingInstructionWrapper * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Converters::XProcessingInstructionWrapper
