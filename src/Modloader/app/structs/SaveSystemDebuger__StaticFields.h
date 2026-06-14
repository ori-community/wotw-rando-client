#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSystemDebuger__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSystemDebuger__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSystemDebuger__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SaveSystemDebuger__StaticFields_DEFINED
struct List_1_System_String_;
struct SaveSystemDebuger__StaticFields {
    bool _SaveSystemDebugEnabled_k__BackingField;
    struct List_1_System_String_* m_saveControllerLog;
    float m_timer;
};
#endif
#if !defined(IL2CPP_STRUCT_SaveSystemDebuger__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SaveSystemDebuger__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#endif
#undef IL2CPP_STRUCT_SaveSystemDebuger__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSystemDebuger__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SaveSystemDebuger__StaticFields_FWDDECL)
#include <Modloader/app/structs/SaveSystemDebuger__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSystemDebuger__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
