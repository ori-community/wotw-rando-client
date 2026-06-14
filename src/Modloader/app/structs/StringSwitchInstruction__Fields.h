#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringSwitchInstruction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringSwitchInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringSwitchInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_StringSwitchInstruction__Fields_DEFINED
struct Dictionary_2_System_String_System_Int32_;
struct StrongBox_1_System_Int32_;
struct __declspec(align(8)) StringSwitchInstruction__Fields {
    struct Dictionary_2_System_String_System_Int32_* _cases;
    struct StrongBox_1_System_Int32_* _nullCase;
};
#endif
#if !defined(IL2CPP_STRUCT_StringSwitchInstruction__Fields_FWDDECL)
#define IL2CPP_STRUCT_StringSwitchInstruction__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/StrongBox_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_StringSwitchInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringSwitchInstruction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StringSwitchInstruction__Fields_FWDDECL)
#include <Modloader/app/structs/StringSwitchInstruction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringSwitchInstruction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
