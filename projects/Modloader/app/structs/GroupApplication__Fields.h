#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupApplication__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupApplication__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupApplication__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_GroupApplication__Fields_DEFINED
struct EntityWithLineage;
struct EntityKey_5;
struct __declspec(align(8)) GroupApplication__Fields {
    struct EntityWithLineage* Entity;
    struct DateTime Expires;
    struct EntityKey_5* Group;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupApplication__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroupApplication__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_5.h>
#include <Modloader/app/structs/EntityWithLineage.h>
#endif
#undef IL2CPP_STRUCT_GroupApplication__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupApplication__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroupApplication__Fields_FWDDECL)
#include <Modloader/app/structs/GroupApplication__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupApplication__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
