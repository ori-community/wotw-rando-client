#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonBuilder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonBuilder__Fields_DEFINED
struct StringBuilder;
struct Stack_1_System_Int32_;
struct __declspec(align(8)) JsonBuilder__Fields {
    struct StringBuilder* m_sb;
    bool m_mustInsertSeparator;
    struct Stack_1_System_Int32_* m_scopes;
    int32_t m_pendingSlot;
    int32_t m_nextIdent;
};
#endif
#if !defined(IL2CPP_STRUCT_JsonBuilder__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonBuilder__Fields_FWDDECL
#include <Modloader/app/structs/Stack_1_System_Int32_.h>
#include <Modloader/app/structs/StringBuilder.h>
#endif
#undef IL2CPP_STRUCT_JsonBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonBuilder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonBuilder__Fields_FWDDECL)
#include <Modloader/app/structs/JsonBuilder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonBuilder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
