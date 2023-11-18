#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemberPrimitiveUnTyped_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemberPrimitiveUnTyped_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberPrimitiveUnTyped_DEFINED)
#include <Modloader/app/structs/MemberPrimitiveUnTyped__Fields.h>
#if defined(IL2CPP_STRUCT_MemberPrimitiveUnTyped__Fields_DEFINED)
#define IL2CPP_STRUCT_MemberPrimitiveUnTyped_DEFINED
struct MemberPrimitiveUnTyped__Class;
struct MemberPrimitiveUnTyped {
    struct MemberPrimitiveUnTyped__Class* klass;
    MonitorData* monitor;
    struct MemberPrimitiveUnTyped__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemberPrimitiveUnTyped_FWDDECL)
#define IL2CPP_STRUCT_MemberPrimitiveUnTyped_FWDDECL
#include <Modloader/app/structs/MemberPrimitiveUnTyped__Class.h>
#endif
#undef IL2CPP_STRUCT_MemberPrimitiveUnTyped_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberPrimitiveUnTyped_DEFINED) && !defined(IL2CPP_STRUCT_MemberPrimitiveUnTyped_FWDDECL)
#include <Modloader/app/structs/MemberPrimitiveUnTyped.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemberPrimitiveUnTyped.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
