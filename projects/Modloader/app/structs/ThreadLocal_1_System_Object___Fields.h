#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadLocal_1_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadLocal_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadLocal_1_System_Object___Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadLocal_1_System_Object___Fields_DEFINED
struct Func_1_Object_;
struct ThreadLocal_1_T_LinkedSlot_System_Object_;
struct __declspec(align(8)) ThreadLocal_1_System_Object___Fields {
    struct Func_1_Object_* m_valueFactory;
    int32_t m_idComplement;
    bool m_initialized;
    struct ThreadLocal_1_T_LinkedSlot_System_Object_* m_linkedSlot;
    bool m_trackAllValues;
};
#endif
#if !defined(IL2CPP_STRUCT_ThreadLocal_1_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_ThreadLocal_1_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/Func_1_Object_.h>
#include <Modloader/app/structs/ThreadLocal_1_T_LinkedSlot_System_Object_.h>
#endif
#undef IL2CPP_STRUCT_ThreadLocal_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadLocal_1_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_ThreadLocal_1_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/ThreadLocal_1_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadLocal_1_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
