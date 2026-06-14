#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemberPrimitiveTyped_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemberPrimitiveTyped_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberPrimitiveTyped_DEFINED)
#include <Modloader/app/structs/MemberPrimitiveTyped__Fields.h>
#if defined(IL2CPP_STRUCT_MemberPrimitiveTyped__Fields_DEFINED)
#define IL2CPP_STRUCT_MemberPrimitiveTyped_DEFINED
struct MemberPrimitiveTyped__Class;
struct MemberPrimitiveTyped {
    struct MemberPrimitiveTyped__Class* klass;
    MonitorData* monitor;
    struct MemberPrimitiveTyped__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemberPrimitiveTyped_FWDDECL)
#define IL2CPP_STRUCT_MemberPrimitiveTyped_FWDDECL
#include <Modloader/app/structs/MemberPrimitiveTyped__Class.h>
#endif
#undef IL2CPP_STRUCT_MemberPrimitiveTyped_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberPrimitiveTyped_DEFINED) && !defined(IL2CPP_STRUCT_MemberPrimitiveTyped_FWDDECL)
#include <Modloader/app/structs/MemberPrimitiveTyped.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemberPrimitiveTyped.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
