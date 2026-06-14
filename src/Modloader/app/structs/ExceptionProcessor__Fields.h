#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionProcessor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_ExceptionProcessor__Fields_DEFINED
struct Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_;
struct StringBuilder;
struct String;
struct Action_1_Moon_ExceptionProcessing_ExceptionEntry_;
struct __declspec(align(8)) ExceptionProcessor__Fields {
    struct Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_* m_exceptions;
    struct StringBuilder* m_builder;
    struct String* m_logPath;
    struct Action_1_Moon_ExceptionProcessing_ExceptionEntry_* OnNewException;
};
#endif
#if !defined(IL2CPP_STRUCT_ExceptionProcessor__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExceptionProcessor__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Moon_ExceptionProcessing_ExceptionEntry_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#endif
#undef IL2CPP_STRUCT_ExceptionProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionProcessor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionProcessor__Fields_FWDDECL)
#include <Modloader/app/structs/ExceptionProcessor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionProcessor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
