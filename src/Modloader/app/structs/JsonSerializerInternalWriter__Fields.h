#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonSerializerInternalWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonSerializerInternalWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalWriter__Fields_DEFINED)
#include <Modloader/app/structs/JsonSerializerInternalBase__Fields.h>
#if defined(IL2CPP_STRUCT_JsonSerializerInternalBase__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonSerializerInternalWriter__Fields_DEFINED
struct Type;
struct List_1_System_Object_;
struct JsonSerializerInternalWriter__Fields {
    struct JsonSerializerInternalBase__Fields _;
    struct Type* _rootType;
    int32_t _rootLevel;
    struct List_1_System_Object_* _serializeStack;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonSerializerInternalWriter__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_JsonSerializerInternalWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonSerializerInternalWriter__Fields_FWDDECL)
#include <Modloader/app/structs/JsonSerializerInternalWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonSerializerInternalWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
