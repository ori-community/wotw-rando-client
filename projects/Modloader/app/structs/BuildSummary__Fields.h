#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuildSummary__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuildSummary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildSummary__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_BuildSummary__Fields_DEFINED
struct String;
struct Dictionary_2_System_String_System_String_;
struct __declspec(align(8)) BuildSummary__Fields {
    struct String* BuildId;
    struct String* BuildName;
    struct Nullable_1_DateTime_ CreationTime;
    struct Dictionary_2_System_String_System_String_* Metadata;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuildSummary__Fields_FWDDECL)
#define IL2CPP_STRUCT_BuildSummary__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_BuildSummary__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildSummary__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BuildSummary__Fields_FWDDECL)
#include <Modloader/app/structs/BuildSummary__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuildSummary__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
